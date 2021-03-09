<script lang="ts">
  import Code from "../components/Code.svelte";
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

<svelte:window on:keydown={displaySecretPage}/>

{#if !completedKey}
  <Code/>
{:else}
  <Thanks/>
{/if}

