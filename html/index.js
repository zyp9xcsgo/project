//HTML DOM ? properties & methods

// authors tag selectlene
const ul = document.getElementById("authors");

// API - Application Programming Interface

const api_url = "https://randomuser.me/api/?results=10";

//element uusgeh function
const createNode = (element) => document.createElement(element);

//html deeree insert hiih
const append = (parent, el) => parent.appendChild(el);

fetch(api_url)
  .then((resp) => resp.json())
  .then((data) => {
    //authors - g aguulsan array
    let authors = data.results;

    //authors.length = 10
    return authors.map((author) => {
      //li element uusgene
      let li = createNode("li");
      //img element uusgene
      let img = createNode("img");
      //span element uusgene
      let span = createNode("span");

      //zohigchiin zurgiin url haygiig oruulj ugnu
      img.src = author.picture.medium;

      //zohiolchiin neriig haruulah span tag
      span.innerHTML = `${author.name.title}. ${author.name.first} ${author.name.last}`;

      // li -> img
      append(li, img);
      // li -> span
      append(li, span);
      //ul -> li
      append(ul, li);
    });
  })
  .catch((err) => console.log("Aldaa: ", err))
  .finally(() => console.log("Duuslaa"));
