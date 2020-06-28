function calcular() {
    var a = document.getElementById("a").checked;
    var b = document.getElementById("b").checked;
    var p = document.getElementById("porta").value;
    var resultado = document.getElementById("resultado");

    switch (p) {
        case "not":
            resultado.innerHTML = "A: " + !a + " B: " + !b;
            break;

        case "and":
            resultado.innerHTML = a === true && b === true ? "AND = true" : "AND = false";
            break;
        case "or":
            resultado.innerHTML = a === true || b === true ? "AND = true" : "AND = false";
            break;
        case "xor":
            resultado.innerHTML = a ^ b ? "AND = true" : "AND = false";
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