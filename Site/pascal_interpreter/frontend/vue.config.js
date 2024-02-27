module.exports = {
    devServer: {
      proxy: {
        '/api': {
          target: 'http://localhost/path/to/your/backend',
          changeOrigin: true,
          pathRewrite: {
            '^/api': ''
          }
        }
      }
    }
  }
  