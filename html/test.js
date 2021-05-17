function Chinguush() {
    var min = document.getElementById('minnum').value;
    var max = document.getElementById('maxnum').value;
    var random = Math.floor(Math.random() * (+max + 1 - +min)) + +min; 
    document.getElementById('chinguush').innerHTML = random;
}   