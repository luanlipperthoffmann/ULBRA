var displayBuffer = "";
var numero = "";
var operacao = [undefined,undefined,undefined];

function pressNum(num){
    numero =numero.concat(num.innerHTML);
    console.log(numero);
    showDisplay(num.innerHTML); 
}

function pressOperator(op){
    operacao[0] = numero;
    operacao[1] = op.innerHTML;
    showDisplay(op.innerHTML);

}

function clearMemory(){
    numero = "";
}

function clearDisplay(){
    displayBuffer = "";
    var tela = document.getElementById("display");
    tela.value = displayBuffer;
}

function clearAll(){
    clearDisplay();
    clearMemory();
}

function showDisplay(conteudo){
    displayBuffer = displayBuffer.concat(conteudo);
    var tela = document.getElementById("display");
    tela.value = displayBuffer;
}