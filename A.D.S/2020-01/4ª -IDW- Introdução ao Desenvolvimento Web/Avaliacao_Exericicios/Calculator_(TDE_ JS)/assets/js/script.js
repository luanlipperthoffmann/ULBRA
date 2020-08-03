var displayBuffer = "";
var numero = "";
var operacao = [undefined,undefined,undefined];
var resultado = undefined;

function pressNum(num){
    numero =numero.concat(num.innerHTML);
    console.log(numero);
    showDisplay(num.innerHTML); 
}

//neste if o sinal da operação so podera ser selecionado e só aparecerá na tela uma vez
function pressOperator(op){
    if(operacao[1] == undefined){
        operacao[0] = numero;
        operacao[1] = op.innerHTML;
        showDisplay(op.innerHTML);
        numero = "";
    }
    
}

function pressResult(){
    operacao[2] = numero;
    var keepResultado;
    switch(operacao[1]){
        case '/' :
            resultado = Number (operacao [0]) / Number (operacao [2]);
            break;
        case '*':
            resultado = Number (operacao [0]) * Number (operacao [2]);
            break;
        case '+':
            resultado = Number (operacao [0]) + Number (operacao [2]);
            break;
        case '-':
            resultado = Number (operacao [0]) - Number (operacao [2]);
            break;
        case '%':
            resultado = Number (operacao [0]) % Number (operacao [2]);
            break;
    }
    keepResultado = resultado;
    clearDisplay();
    showDisplay(resultado);
    clearMemory();
    numero = keepResultado;

}

function clearMemory(){
    numero = "";
    operacao = [undefined, undefined,undefined];
    resultado= undefined;
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
