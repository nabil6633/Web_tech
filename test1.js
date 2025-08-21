document.body.addEventListener("load", dis);
function dis()
{
    let b1= document.getElementById("b1");
    b1.style.width = "200px";
    b1.style.height = "200px";
    b1.style.border = "2px solid black";
    b1.textContent= "Box1";
    b1.style.display = "flex";
    b1.style.backgroundColor = "Blue";
    b1.style.justifyContent = "center";
    let b2= document.getElementById("b2");
    b2.style.border = "2px solid black";


}
