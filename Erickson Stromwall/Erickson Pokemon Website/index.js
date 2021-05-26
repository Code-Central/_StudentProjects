function genOneToggle(){
    var toggleOne = document.getElementById("genOne");
    if(toggleOne.style.display === "none"){
        toggleOne.style.display = "block";
    }
    else{
        toggleOne.style.display = "none";
    }
}
function genTwoToggle(){
    var toggleTwo = document.getElementById("genTwo");
    if(toggleTwo.style.display === "block"){
        toggleTwo.style.display = "none";
    }
    else{
        toggleTwo.style.display = "block";
    }
}
