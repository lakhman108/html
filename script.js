let changeborder = document.getElementById("card");
console.log(changeborder);

changeborder.addEventListener("mouseover", function () {
  function getRandomColor() {
    var letters = "0123456789ABCDEF";
    var color = "#";
    for (let i = 0; i < 6; i++) {
      color += letters[Math.floor(Math.random() * 16)];
    }
    return color;
  }
  function changecolor() {
    const color = getRandomColor();
    changeborder.style.border = `5px solid ${color}`;

    changeborder.style.boxShadow = `0px 10px 15px 0 ${color}`;
  }
  setInterval(changecolor, 1000);
});
