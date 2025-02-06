
text = "bhwqbskjdbkj gdejdgwkjed           eigehebnm        dgewjhgewhj        "
arr = text.split(/ \s/)
console.log(arr)

text = arr.filter(function(ele){
        return ele != "";
}
)
console.log(text)
console.log(text.join())
