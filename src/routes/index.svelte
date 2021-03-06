<script lang="ts">
  import Thanks from "../components/Thanks.svelte";

  let completedKey: Boolean = false;

  const secretKey: Array<String> = [
    't', 'h', 'a', 'n', 'k', 's', /* "thanks_" */ 
    'c', 'h', 'o', 'c', 'o', 'l', 'a', 't', 'e' /* "chocolate" */
  ];
  let inputKey: Array<String> = [];

  function displaySecretPage(event: KeyboardEvent) {
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
