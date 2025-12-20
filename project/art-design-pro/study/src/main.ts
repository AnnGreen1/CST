import { createApp } from 'vue'
import './style.css'
import App from './App.vue'

import ElementPlus from 'element-plus'
import 'element-plus/dist/index.css'

import '@/assets/styles/app.scss'
import '@/assets/styles/variables.scss'

import router from "@/router";

createApp(App).use(ElementPlus).use(router).mount('#app')