module.exports = {
    root: true,
    env: {
      node: true
    },
    extends: [
      'plugin:vue/vue3-essential', // Use the vue3-essential preset
      '@vue/standard' // Use the standard ESLint rules
    ],
    parserOptions: {
      parser: 'babel-eslint'
    },
    rules: {
      // Additional or modified rules can be added here
      // Example:
      // 'no-console': process.env.NODE_ENV === 'production' ? 'error' : 'off',
      // 'no-debugger': process.env.NODE_ENV === 'production' ? 'error' : 'off'
    }
  }
  