// variable = A container that stores a value.
//                   Behaves as if it were the value it contains.

let fullName = "ejmfrancisco";
let age = 25;
let isHandsome = true;

document.getElementById("p1").textContent = 'Your id is ${fullName}';
document.getElementById("p2").textContent = `You are ${age} years old`;
document.getElementById("p3").textContent = `Enrolled: ${isHandsome}`;

console.log(`Hello!`);
console.log(fullName);
console.log(typeof(fullName));