let changeborder = document.getElementById("card");
console.log(changeborder);
let id;
function getRandomColor() {
  var letters = "0123456789ABCDEF";
  var color = "#";
  for (let i = 0; i < 6; i++) {
    color += letters[Math.floor(Math.random() * 16)];
  }
  return color;
}
changeborder.addEventListener("mouseover", function () {
  
  function changecolor() {
    const color = getRandomColor();
    changeborder.style.border = `5px solid ${color}`;

    changeborder.style.boxShadow = `0px 10px 15px 0 ${color}`;
  }
  id=setInterval(changecolor, 1000);
});
changeborder.addEventListener("mouseout", function () {
  clearInterval(id);
  changeborder.style.border = "none";
  changeborder.style.boxShadow = "none";
});
