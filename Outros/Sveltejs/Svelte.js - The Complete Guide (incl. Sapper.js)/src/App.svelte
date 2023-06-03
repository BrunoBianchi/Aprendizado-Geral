<script>
	let name = "Bruno";
	let age = 21;
	function incrementarIdade() {
		age+=1;
	}
</script>

<style>
	h1 {
		color: purple;
	}
</style>

<h1>Hello, I am {name}, I am {age} year old!</h1>
<!-- Ao clicar no botao, a funcao sera chamada! -->
<button on:click={incrementarIdade}>Incrementar</button>
