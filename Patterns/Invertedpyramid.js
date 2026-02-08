// let n = 5;
for (let i = 1 ; i <= 5; i++){
    let row = "";
    for(let j = 5; j >= i; j--){
        row += "*" + " ";
    }
    console.log(row);
}