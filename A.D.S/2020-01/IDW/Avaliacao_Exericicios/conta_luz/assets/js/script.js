function calculoKwh(){
    var quantKwh = document.getElementById('quantKwh');
    var priceKwh = document.getElementById('priceKwh');
    var totalKwh = 0;
    var display = document.getElementById('display');

    if (quantKwh.length == "" || priceKwh.value.length == "") 
        return display.textContent = "Preencha os campos";
    
    quantKwh = parseInt(quantKwh.value);
    priceKwh = parseFloat(priceKwh.value);

    if (quantKwh >100 && quantKwh<=200){
        totalKwh=(quantKwh*priceKwh)*1.25;
        console.log("total a ser pago com acréscimo de 25%");
    }
    else if (quantKwh >200){
        totalKwh=(quantKwh*priceKwh)*1.5;
        console.log("total a ser pago com acréscimo de 50%");
    }
    else{
        totalKwh=quantKwh*priceKwh;
        console.log("total a ser pago sem acréscimo")
    }

    quantKwh.value = "";
    priceKwh.value = "";
    
    display.innerHTML= totalKwh.toLocaleString('pt-BR', {style: "currency", currency: "BRL"});
}
