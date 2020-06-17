function calculoImc(){
    var peso = document.getElementById('peso');
    var altura = document.getElementById('altura');
    var imc = 0;
    var display = document.getElementById('display')

    peso = parseInt(peso.value);
    altura = parseInt(peso.value);

    imc = peso/(altura*altura);
    
    if (imc>=18.5 && imc<25){
        display.innerHTML = "Seu I.M.C é de: " + imc +  "<br> No peso ideal!";
        console.log("imc entre 18,5 e 25. No peso ideal");
    }
    else if (imc<18.5){
       
        display.innerHTML= "Seu I.M.C é de: " + imc +  "<br> Abaixo do peso ideal!";
        console.log("imc menor que 18,5. Abaixo do peso ideal!");
    }
    else if (imc>=25 && imc <=30){
        display.innerHTML= "Seu I.M.C é de: " + imc +  "<br> Acima do peso ideal!";
        console.log("imc entre 25 e 30. Voçê está acima do peso ideal!");
    }
    else{
        display.innerHTML= "Seu I.M.C é de: " + imc +  "<br> Voçê está obeso!";
        console.log(" imc maior que 30. Obeso")
    }

}

function limparTela(){
    displayBuffer = "";
    var tela = document.getElementById("display");
    tela.value = displayBuffer;
}