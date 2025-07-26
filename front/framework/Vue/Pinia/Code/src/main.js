import { createApp } from 'vue'
import './style.css'
import App from './App.vue'

// createApp(App).mount('#app')

import router from './router'

import { createPinia } from 'pinia'
import piniaPersist from 'pinia-plugin-persist';

const app = createApp(App)
const pinia = createPinia()
pinia.use(piniaPersist);
app.use(router)
app.use(pinia)

app.mount('#app')