import { createRouter, createWebHistory } from 'vue-router'
import HomeView from '../views/HomeView.vue'

import commonroute from './routes/commonroute'
import vuex from './routes/vuex'

const router = createRouter({
  history: createWebHistory(import.meta.env.BASE_URL),
  routes: [
    {
      path: '/',
      name: 'home',
      component: HomeView
    },
    {
      path: '/about',
      name: 'about',
      // route level code-splitting
      // this generates a separate chunk (About.[hash].js) for this route
      // which is lazy-loaded when the route is visited.
      component: () => import('../views/AboutView.vue')
    },
    {
      path: '/JavascriptAxios',
      name: 'JavascriptAxios',
      // route level code-splitting
      // this generates a separate chunk (about.[hash].js) for this route
      // which is lazy-loaded when the route is visited.
      component: () => import(/* webpackChunkName: "about" */ '../views/JavascriptAxios.vue')
    },
    ...commonroute,
    ...vuex
  ]
})

export default router
