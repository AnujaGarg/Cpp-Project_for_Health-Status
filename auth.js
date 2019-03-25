  var fs = require('fs');
  
  var firebase = require('firebase');
  
  // Initialize Firebase
  var config = {
    apiKey: "<your apiKey>",
    authDomain: "<your authDomain>",
    databaseURL: "<your databaseURL>",
    projectId: "<your project id>",
    storageBucket: "<your storageBucket>",
    messagingSenderId: "<your messagingSenderId>"
  };
  firebase.initializeApp(config);
  /* 
  var database = firebase.database();"utf8"
  var ref = database.ref('auth');
 */
var authen = firebase.auth();
//check logged in or not
if(fs.readFileSync("./stuff/valide.txt", "utf8") == 1){
  authen.signOut();
  fs.writeFileSync("./stuff/valide.txt", "2");
}
//reading file
else{
var email = fs.readFileSync('./stuff/demo.txt', 'utf8');
var psw = fs.readFileSync('./stuff/demo2.txt', 'utf8');
//fs.writeFileSync("./stuff/demo2.txt", "0");
fs.writeFileSync("./stuff/valide.txt", "1");
//sign in
authen.signInWithEmailAndPassword(email, psw).catch(function(e){ console.log(e.message);
fs.writeFileSync("./stuff/valide.txt", "0");
//process.exit("^C");
});
}
