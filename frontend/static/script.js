function actualizarNumero() {
    fetch('/numero')
        .then(response => response.json())
        .then(data => {
            document.getElementById('numero').textContent = data.numero;
            document.getElementById('cpu').textContent = data.cpu;
            document.getElementById('EN').textContent = data.EN;
            document.getElementById('ti').textContent = data.ti; 
            document.getElementById('RAM').textContent =data.RAM
        })
        .catch(error => console.error("Error al obtener número:", error));
}

actualizarNumero();
setInterval(actualizarNumero, 1000);