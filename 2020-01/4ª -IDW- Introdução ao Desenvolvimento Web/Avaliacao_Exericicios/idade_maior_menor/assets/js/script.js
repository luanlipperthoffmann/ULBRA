function verificarIdades(){
    var idade = document.getElementById("idade").value;
    
    console.log(idade);
    idade=idade.split(",");

    var maior = parseInt(idade[0]);
    var menor = parseInt(idade[0]);

    for (i=0; i<idade.length; i++) {
        if (parseInt(idade[i])>maior)
            maior=(idade[i])
        
        if (parseInt(idade[i])<menor)
            menor=(idade[i])
    }

    document.getElementById("resultado").innerHTML='A maior idade dígitada foi de: ' + maior +'<br/>A menor idade dígitada foi de: ' + menor;
}