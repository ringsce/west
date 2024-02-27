<template>
  <div>
    <nav>
      <div class="sidebar">
        <div class="slideshow">
          <img class="slide" src="image1.jpg" alt="Slide 1">
          <img class="slide" src="image2.jpg" alt="Slide 2">
          <img class="slide" src="image3.jpg" alt="Slide 3">
        </div>
        <p>Choose a theme:</p>
        <a href="?theme=vue" class="theme-link">Vue</a>
        <a href="?theme=bubble" class="theme-link">Bubble</a>
        <a href="?theme=dark" class="theme-link">Dark</a>
        <a href="?theme=pure" class="theme-link">Pure</a>
      </div>
    </nav>
    <div id="app">
      <Sidebar @item-click="handleSidebarItemClick"></Sidebar>
      <div class="content">
        <h1>Pascal Interpreter</h1>
        <textarea v-model="code" placeholder="Enter your Pascal code here..."></textarea>
        <button @click="interpretCode">Interpret</button>
        <div v-if="output !== null">
          <h2>Output:</h2>
          <pre>{{ output }}</pre>
        </div>
        <div v-if="error !== null">
          <h2>Error:</h2>
          <pre>{{ error }}</pre>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
import axios from 'axios';
import Sidebar from './components/Sidebar.vue';
// Import other components if used

export default {
  components: {
    Sidebar
    // Include other components if used
  },
  data() {
    return {
      code: '',
      output: null,
      error: null
    };
  },
  methods: {
    interpretCode() {
      axios.post('http://localhost/path/to/your/backend/index.php', { code: this.code })
        .then(response => {
          if (response.data.output) {
            this.output = response.data.output;
            this.error = null;
          } else {
            this.output = null;
            this.error = response.data.error;
          }
        })
        .catch(error => {
          console.error('Error interpreting Pascal code:', error);
          this.output = null;
          this.error = 'An error occurred while interpreting the Pascal code.';
        });
    },
    handleSidebarItemClick(item) {
      console.log('Clicked:', item);
      // You can perform navigation or other actions based on the clicked item
    }
  }
};
</script>

<style>
/* Add your CSS styles here */
/* These styles will affect elements globally */

nav {
  /* Add any styling for the <nav> element */
}

.sidebar {
  /* Add styling for the sidebar */
}

.slideshow {
  /* Add styling for the slideshow */
}

.slide {
  /* Add styling for the slides */
}

.theme-link {
  /* Add styling for theme links */
}

#app {
  display: flex;
  height: 100vh;
}

.content {
  flex: 1;
  padding: 20px;
}

textarea {
  width: 100%;
  height: 200px;
  margin-bottom: 10px;
}

button {
  padding: 10px 20px;
  background-color: #007bff;
  color: white;
  border: none;
  cursor: pointer;
}

button:hover {
  background-color: #0056b3;
}

h2 {
  margin-top: 20px;
}

pre {
  background-color: #f8f9fa;
  padding: 10px;
  border-radius: 5px;
}
</style>
