function totalCompras() {
    var precos = document.querySelectorAll("#preco");
    var resultado = document.querySelector("#resultado")
    var total = 0;
    //querySelectorAll retorna tudo dentro do html para um array com o id especificados
    //forEach pega todos os objetos dentro da array checada
    precos.forEach(function(preco){
        //console.log(preco.value)
        if(preco.checked==true){
            total+=Number(preco.value) 
        }
    })
    //console.log(total);

    resultado.value = total.toLocaleString("BRL", {
        style:"currency", currency:"BRL"
    })
}