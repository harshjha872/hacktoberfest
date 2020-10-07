
// console.log(window.document.getElementById("heading"));
// var say = console.log(document.getElementById("name").textContent);


function Sayhi() {
    var name = window.document.getElementById("input").value;
    var message = "<h1>Hello " + name + "</h1>";
    document.getElementById("content").innerHTML = message;
    if (name === "Harsh") {
        message = "<h1>Hello Owner of the Page </h1>";
        document.getElementById("content").innerHTML = message;
    }
    if (name == false ) {
        message = "**Say Something**";
        document.getElementById("content").innerHTML = message;
       
        
    }
    
}