document.getElementById("btn1").addEventListener("click",toggleMenu );
/*function toggleMenu() {
    let div1 = document.getElementById("div1");
    parent.getComputedStyle.border="2px, solid, black";

}*/
function toggleMenu() 
{   let nav = document.getElementById("navbar");
    nav.style.display = (nav.style.display= "flex");
    nav.style.flexDirection = "column";
    nav.style.backgroundColor = "lightblue";
    nav.style.border = "2px solid black";
    let div1=document.getElementById("div1");
    div1.style.getflexDirection="column";
    div1.getComputedStyle.backgroundColor="lightblue";
    div1.getComputedStyle.border="2px solid black";
} 
