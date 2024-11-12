/// GLOBAL VARIABLES TO REMEMBER LAST OPEN TABS , TO BE USED MULTIPLE FUNCTIONS.
var htabname = "overview" , gtabname = "intro" , btabname = "profileinfo" , stabname ="sgps";  head = document.getElementById("headback"); body = document.getElementById("body");

///------------------------------------------------------------MAIN HEAD TABS' FUNCTIONS --------------------------------------////
////// Welcome , To be executed on page loading completed
function welcome(){
	setTimeout(function(){
		document.getElementById('welcometext').style.display = "none";
	},3990)
	setTimeout(function(){		
		document.getElementById('welcomeground').style.display = "none";
	},5900)
	setTimeout(function(){
		document.getElementById('greenload').style.display = "block";
		window.scrollTo(0, 0);
		setTimeout(function(){
			document.getElementById(htabname).style.display = "block";
			document.getElementById('greenload').style.display = "none";
			}, 3000);
	},5000);
}	
/////////------------------------HOME----------------------------//////////////////	
function openHome() {
    var i, tabcontent, tablinks, htabcontent, tabButton, tablinks;////variables anounced
	/////////////// values assigned to variables
	
	///--------Single Element Variables
	
	tabButton = document.getElementById("homebutton");
	loader = document.getElementById('greenload');
	tabCurrent = document.getElementById('home');
	
	///-------Multiple Element in Single Variable with classes__(Arrays)
	
	tablinks = document.getElementsByClassName("tablinks");
	htabcontent = document.getElementsByClassName("base");
    tabcontent = document.getElementsByClassName("tabcontent");

	
	///--------Loops For Arrays , to apply to each Element in Array
	
	for (i = 0; i < tablinks.length; i++) {
		tabcontent[i].style.display = "none";
		tablinks[i].className = tablinks[i].className.replace(" active", "");
		tablinks[i].className = tablinks[i].className.replace(" redtab", " greentab");
		tablinks[i].className = tablinks[i].className.replace(" goldtab", " greentab");
		tablinks[i].className = tablinks[i].className.replace(" bluetab", " greentab");
	}
	///--------Simple Statements for Variables containing single element
	
	body.className = "greenbody";
	tabButton.className += " active";
	tabCurrent.style.display = "block";
	loader.style.display = "block";
	head.style.backgroundColor = "green";
	
	///+++++
	for (i= 0; i < htabcontent.length; i++){
	htabcontent[i].style.display = "none";
	}
	///------To be Executed after Delay of 2500 milliseconds , 2.5 sec
	
	setTimeout(function(){
		document.getElementById(htabname).style.display = "block";
		loader.style.display = "none";
    }, 2500);
	
	window.scrollTo(0, 0);
}

//////////////////----------------------Profile-------------------///////////////////

function openBio() {
    var i, tabcontent, tablinks, btabcontent, tabButton, tablinks;////variables anounced
	/////////////// values assigned to variables
	
	///--------Single Element Variables
	
	tabButton = document.getElementById("biobutton");
	loader = document.getElementById("blueload");
	tabCurrent = document.getElementById('bio');
	
	///-------Multiple Element in Single Variable with classes__(Arrays)
	
	tablinks = document.getElementsByClassName("tablinks");
	btabcontent = document.getElementsByClassName("profile");
    tabcontent = document.getElementsByClassName("tabcontent");

	
	///--------Loops For Arrays , to apply to each Element in Array
	
	for (i = 0; i < tablinks.length; i++) {
		tabcontent[i].style.display = "none";
		tablinks[i].className = tablinks[i].className.replace(" active", "");
		tablinks[i].className = tablinks[i].className.replace(" redtab", " bluetab");
		tablinks[i].className = tablinks[i].className.replace(" goldtab", " bluetab");
		tablinks[i].className = tablinks[i].className.replace(" greentab", " bluetab");
	}
	///--------Simple Statements for Variables containing single element
	
	body.className = "bluebody";
	tabButton.className += " active";
	tabCurrent.style.display = "block";
	loader.style.display = "block";
	head.style.backgroundColor = "navy";
	
	///+++++
	for (i= 0; i < btabcontent.length; i++){
	btabcontent[i].style.display = "none";
	}
	///------To be Executed after Delay of 2500 milliseconds , 2.5 sec
	
	setTimeout(function(){
		document.getElementById(btabname).style.display = "block";
		loader.style.display = "none";
    }, 2500);
	
	window.scrollTo(0, 0);
}

/////////////////////////--------------Game Tab-------------------------/////////

function openGame(evt, tabName , gtabclass) {
      var i, tabcontent, tablinks, gtabcontent, tabButton, tablinks;////variables anounced
	/////////////// values assigned to variables
	
	///--------Single Element Variables
	
	tabButton = document.getElementById("gamebutton");
	loader = document.getElementById('redload');
	tabCurrent = document.getElementById('gaming');
	
	///-------Multiple Element in Single Variable with classes__(Arrays)
	
	tablinks = document.getElementsByClassName("tablinks");
	gtabcontent = document.getElementsByClassName("game");
    tabcontent = document.getElementsByClassName("tabcontent");

	
	///--------Loops For Arrays , to apply to each Element in Array
	
	for (i = 0; i < tablinks.length; i++) {
		tabcontent[i].style.display = "none";
		tablinks[i].className = tablinks[i].className.replace(" active", "");
		tablinks[i].className = tablinks[i].className.replace(" bluetab", " redtab");
		tablinks[i].className = tablinks[i].className.replace(" goldtab", " redtab");
		tablinks[i].className = tablinks[i].className.replace(" greentab", " redtab");
	}
	///--------Simple Statements for Variables containing single element
	
	body.className = "redbody";
	tabButton.className += " active";
	tabCurrent.style.display = "block";
	loader.style.display = "block";
	head.style.backgroundColor = "firebrick";
	
	///+++++
	for (i= 0; i < gtabcontent.length; i++){
	gtabcontent[i].style.display = "none";
	}
	///------To be Executed after Delay of 2500 milliseconds , 2.5 sec
	
	setTimeout(function(){
		document.getElementById(gtabname).style.display = "block";
		loader.style.display = "none";
    }, 2500);
	
	window.scrollTo(0, 0);
}
////////////////////-----------------school---------------------------//////////////
function openSchool(){
      var i, tabcontent, tablinks, stabcontent, tabButton, tablinks;////variables anounced
	/////////////// values assigned to variables
	
	///--------Single Element Variables
	
	tabButton = document.getElementById("schoolbutton");
	loader = document.getElementById('goldload');
	tabCurrent = document.getElementById('school');
	
	///-------Multiple Element in Single Variable with classes__(Arrays)
	
	tablinks = document.getElementsByClassName("tablinks");
	stabcontent = document.getElementsByClassName("skool");
    tabcontent = document.getElementsByClassName("tabcontent");

	
	///--------Loops For Arrays , to apply to each Element in Array
	
	for (i = 0; i < tablinks.length; i++) {
		tabcontent[i].style.display = "none";
		tablinks[i].className = tablinks[i].className.replace(" active", "");
		tablinks[i].className = tablinks[i].className.replace(" redtab", " goldtab");
		tablinks[i].className = tablinks[i].className.replace(" bluetab", " goldtab");
		tablinks[i].className = tablinks[i].className.replace(" greentab", " goldtab");
	}
	///--------Simple Statements for Variables containing single element
	
	body.className = "goldbody";
	tabButton.className += " active";
	tabCurrent.style.display = "block";
	loader.style.display = "block";
	head.style.backgroundColor = "darkgoldenrod";
	
	///+++++
	for (i= 0; i < stabcontent.length; i++){
	stabcontent[i].style.display = "none";
	}
	///------To be Executed after Delay of 2500 milliseconds , 2.5 sec
	
	setTimeout(function(){
		document.getElementById(stabname).style.display = "block";
		loader.style.display = "none";
    }, 2500);
	
	window.scrollTo(0, 1);
}

///--------------- FUNCTIONS FOR SUB TABS IN EACH TAB -------------------------///
////////////////////////////////////HOME-TAB///////////////////////////////////
function subHome(tabButton, currentTab) {
	var i, loader, links, htabcontent, Button;
	
	loader = document.getElementById('greenload');	
	links = document.getElementsByClassName("homelink");
	tabcontent = document.getElementsByClassName("base");
	Button = document.getElementById(tabButton);
	
	for (i= 0; i < links.length; i++){
		links[i].className = links[i].className.replace(" insight", "");
		tabcontent[i].style.display = "none";
	}
	
	Button.className += " insight";
	loader.style.display = "block";
	
	setTimeout(function(){
		document.getElementById(currentTab).style.display = "block";
		loader.style.display = "none";
    }, 1500);
	
	htabname = currentTab; 
	window.scrollTo(0, 1);
}

////////////////////////////////////BIO-TAB//////////////////////////////////
function subProfile(tabButton, currentTab) {
    var i, loader, links, tabcontent, Button;
	
	loader = document.getElementById('blueload');	
	links = document.getElementsByClassName("biolink");
	tabcontent = document.getElementsByClassName("profile");
	Button = document.getElementById(tabButton);
	
	for (i= 0; i < links.length; i++){
		links[i].className = links[i].className.replace(" bioactive", "");
		tabcontent[i].style.display = "none";
	}
	
	Button.className += " bioactive";
	loader.style.display = "block";
	
	setTimeout(function(){
		document.getElementById(currentTab).style.display = "block";
		loader.style.display = "none";
    }, 1500);
	
	btabname = currentTab; 
	window.scrollTo(0, 1);
}

///////////////////////////////GAME-TAB////////////////////////////
function subGame(tabButton, currentTab) {
    var i, loader, links, btabcontent, Button;
	
	loader = document.getElementById('redload');	
	links = document.getElementsByClassName("gamelink");
	tabcontent = document.getElementsByClassName("game");
	Button = document.getElementById(tabButton);
	
	for (i= 0; i < links.length; i++){
		links[i].className = links[i].className.replace(" online", "");
		tabcontent[i].style.display = "none";
	}
	
	Button.className += " online";
	loader.style.display = "block";
	
	setTimeout(function(){
		document.getElementById(currentTab).style.display = "block";
		loader.style.display = "none";
    }, 1500);
	
	gtabname = currentTab; 
	window.scrollTo(0, 1);
}
/////////////////////////SCHOOL-TAB//////////////////////////////////
function subSchool(tabButton, currentTab) {
    var i, loader, links, tabcontent, Button;
	
	loader = document.getElementById('goldload');	
	links = document.getElementsByClassName("schoollink");
	tabcontent = document.getElementsByClassName("skool");
	Button = document.getElementById(tabButton);
	
	for (i= 0; i < links.length; i++){
		links[i].className = links[i].className.replace(" present", "");
		tabcontent[i].style.display = "none";
	}
	
	Button.className += " present";
	loader.style.display = "block";
	
	setTimeout(function(){
		document.getElementById(currentTab).style.display = "block";
		loader.style.display = "none";
    }, 1500);
	
	gtabname = currentTab; 
	window.scrollTo(0, 1);
}