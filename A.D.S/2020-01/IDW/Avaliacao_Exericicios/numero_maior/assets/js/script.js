function numMaior(){
    var num = document.getElementById("num").value;
    
    console.log(num);
    num=num.split(",");

    var maior = parseInt(num[0]);

    for (i=0; i<num.length; i++) {
        if (parseInt(num[i])>maior)
            maior=parseInt(num[i])
    }

    document.getElementById("resultado").innerHTML='O número maior dígitado foi de: ' + maior;
}