// variable = A container that stores a value.
//            Behaves as if it were the value it contains.

let fullName = "EJ 이제이";
let age = 25;
let isHandsome = true;
let isRich = true;

document.getElementById("p1").textContent = 'Your id is ${fullName}';
document.getElementById("p2").textContent = `You are ${age} years old`;
document.getElementById("p3").textContent = `Enrolled: ${isHandsome}`;
document.getElementById("p4").textContent = `Enrolled: ${isRich}`;

console.log(`Hello!`);
console.log(fullName);
console.log(typeof(fullName));
