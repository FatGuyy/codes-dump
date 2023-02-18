import fs from "fs";

// fs.readFile("second.js","utf-8", (err, data)=>{
    // console.log(err)
    // console.log(data)
// })

// let a = fs.readFileSync("second.js")
// console.log(a.toString())

fs.writeFile("File.txt","This is some data for the file." , ()=>{
    console.log("written!");
})

console.log("finished.")