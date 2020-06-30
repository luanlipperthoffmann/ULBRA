function calcular() {
    var a = document.getElementById("a").value;
    var b = document.getElementById("b").value;
    var p = document.getElementById("porta").value;
    var resultado = document.getElementById("resultado");

    switch (p) {
        case "not":
            resultado.innerHTML = "a: " + !a + " b: " + !b;
            break;

        case "and":
            resultado.innerHTML = a === true && b === true ? "and = True" : "and: False";
            break;
        case "or":
            resultado.innerHTML = a === true || b === true ? "or = true" : "or = false";
            break;
        case "xor":
            resultado.innerHTML = a ^ b ? "xor = true" : "xor = false";
            break;
    }

}

function convertToBoolean1(content) {
    if (content == 'true')
        return true;
    return false;
}

function convertToBoolean(content) {
    return content == 'true' ? true : false;
}