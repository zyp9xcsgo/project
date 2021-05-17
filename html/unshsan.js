const books = [
    {
        id: 1,
        name: "Nogoon nuden lam",
        author: "Oyungerel",
        isRead: false,
    },
    {
        id: 2,
        name: "Jaran tsagaan honi",
        author: "Oyungerel",
        isRead: true,
    },
    {
        id: 3,
        name: "bla",
        author: "bla2",
        isRead: false,
    },
] 

for (let index = 0; index < books.length; index++) {
    if (books[index].isRead) {
        console.log(`unshsan: ${books[index].name} `);
    } else {
        console.log(`unshaagui: ${books[index].name}`);
    }
}