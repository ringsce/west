<template>
    <div class="sidebar">
      <ul>
        <li v-for="(item, index) in items" :key="index" @click="handleItemClick(item)">
          {{ item.label }}
        </li>
      </ul>
    </div>
  </template>
  
  <script>
  export default {
    data() {
      return {
        items: [
          { label: 'Home', route: '/' },
          { label: 'About', route: '/about' },
          { label: 'Contact', route: '/contact' }
          // Add more items as needed
        ]
      };
    },
    methods: {
      handleItemClick(item) {
        // Emit an event to notify the parent component of the selected item
        this.$emit('item-click', item);
      }
    }
  };
  </script>
  
  <style>
  .sidebar {
    width: 200px;
    background-color: #f0f0f0;
    padding: 20px;
  }
  
  ul {
    list-style: none;
    padding: 0;
  }
  
  li {
    cursor: pointer;
    padding: 10px 0;
  }
  
  li:hover {
    background-color: #ddd;
  }
  </style>
  