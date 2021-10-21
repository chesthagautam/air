const express = require("express");
const session = require('express-session');
const passport = require("passport");
const GoogleStrategy = require('passport-google-oauth20').Strategy;
const findOrCreate = require('mongoose-findOrCreate');
const app = express();
var path = require('path');
// userSchema.plugin(passportLocalMongoose);
// userSchema.plugin(findOrCreate);
app.use(session({
  secret: "Our little secret.",
  resave: false,
  saveUninitialized: false
}));
app.get('/', function(req, res) {
  res.sendFile("path.join(__dirname + '/index.html')");
});



app.use(passport.initialize());
app.use(passport.session());
//app.use(express.static("public"));





// mongoose.connect("mongodb://localhost:27017/userDB", { useUnifiedTopology: true });
// mongoose.set("useCreateIndex", true);



//userSchema.plugin(passportLocalMongoose);
//userSchema.plugin(findOrCreate);



// use static authenticate method of model in LocalStrategy
//passport.use(User.createStrategy());

// use static serialize and deserialize of model for passport session support
passport.serializeUser(function(user, done) {
  done(null, user.id);
});

passport.deserializeUser(function(id, done) {
  User.findById(id, function(err, user) {
    done(err, user);
  });
});

const CLIENT_ID = "176608565617-9p96e8lbudule6eingk8jl8sc8e6c4v7.apps.googleusercontent.com";
const CLIENT_SECRET = "rRpfXuIr-lxs2vdug9T_QDLQ";




passport.use(new GoogleStrategy({
    clientID: CLIENT_ID,
    clientSecret: CLIENT_SECRET,
    callbackURL: "http://localhost:3000/auth/google/googleLogin"
  },
  function(accessToken, refreshToken, profile, cb) {
    User.findOrCreate({ googleId: profile.id }, function (err, user) {
      return cb(err, user);
    });
  }
));



app.get('/auth/google',
  passport.authenticate('google', { scope : ['profile', 'email'] }));

app.get('/auth/google/redirect',
  passport.authenticate('google', { failureRedirect: '/error' }),
  function(req, res) {
    // Successful authentication, redirect success.
    res.redirect('/success');
  });

const port = process.env.PORT || 8080;
app.listen(port , () => console.log('App listening on port ' + port));
