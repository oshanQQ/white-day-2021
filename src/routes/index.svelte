<script lang="ts">
  import Thanks from "../components/Thanks.svelte";

  let completedKey: Boolean = false;

  const secretKey: Array<Number> = [
    84, 72, 65, 78, 75, 83, 220, /* "thanks_" */ 
    67, 72, 79, 67, 79, 76, 65, 84, 69 /* "chocolate" */
  ];
  let inputKey: Array<Number> = [];

  function displaySecretPage(event: { key: Number; }) {
    inputKey.push(event.key);
    console.log(event.key);
    if (secretKey.toString() === inputKey.toString()) {
      completedKey = true;
    }
  }
</script>

<style>
  h1 {
    font-size: 50px;
    color: #333333;
    font-weight: bold;
    font-family: 'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;
    margin: 80px 80px;
    text-align: center;
  }
</style>

<svelte:window on:keydown={displaySecretPage}/>

<!-- <button on:click={() => completedKey = true}>Press!!</button> -->
{#if !completedKey}
  <h1>ahiahi!</h1>
{:else}
  <Thanks/>
{/if}
