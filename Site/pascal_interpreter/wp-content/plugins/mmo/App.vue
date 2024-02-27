<template>
    <div id="app">
      <header>
        <h1>Welcome to My Vue App</h1>
      </header>
      <main>
        <router-view></router-view> <!-- For Vue Router -->
        <login-form v-if="currentPage === 'login'" @change-page="changePage('register')"></login-form>
        <registration-form v-if="currentPage === 'register'" @change-page="changePage('login')"></registration-form>
      </main>
      <footer>
        <p>&copy; 2022 My Vue App</p>
      </footer>
    </div>
  </template>
  
  <script>
  import LoginForm from './components/LoginForm.vue';
  import RegistrationForm from './components/Registration.vue';
  
  export default {
    name: 'App',
    components: {
      LoginForm,
      RegistrationForm
    },
    data() {
      return {
        currentPage: 'login'
      }
    },
    methods: {
      changePage(page) {
        this.currentPage = page;
      }
    }
  }
  </script>
  
  <style>
  /* Your component styles go here */
  #app {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
  }
  header {
    background-color: #333;
    color: #fff;
    padding: 20px;
  }
  main {
    padding: 20px;
  }
  footer {
    background-color: #333;
    color: #fff;
    padding: 10px 20px;
    text-align: center;
  }
  </style>
  