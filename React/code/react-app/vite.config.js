import { defineConfig } from 'vite'
import react from '@vitejs/plugin-react'

// https://vite.dev/config/
export default defineConfig({
  plugins: [react()],
  server: {
    proxy: {
      '/api': {
        target: 'https://api.uomg.com',
        changeOrigin: true,
        ws: true,
        rewrite: (path) => path.replace(new RegExp('^' + 'api'), '')
      }
    }
  },
})
