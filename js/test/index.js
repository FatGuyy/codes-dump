// document.getElementById("people").innerText=1
// let count = 0
// console.log(count)

let inc_btn = document.getElementById("increment-btn") 
let counter = 0
let pre_entries = document.getElementById("prev")
let count_text = document.getElementById('people')

function increment(){
    counter  += 1
    document.getElementById("people").innerText=counter
    // console.log(counter)
}

function save(){
    // console.log(counter)
    globalThis.final_counter  = counter
    console.log(final_counter)
    final_counter_str = final_counter + " - "
    pre_entries.textContent += final_counter_str 
    counter = 0
    count_text.innerText = 0
}
// save()


// console.log(final_counter)