<template>
  <div>
    <el-form :model="form">
      <el-form-item label="username">
        <el-input v-model="form.username" />
      </el-form-item>
      <el-form-item label="password">
        <el-input v-model="form.password" type="password" autocomplete="off" />
      </el-form-item>
      <el-form-item>
        <el-button type="primary" @click="onSubmit">submit</el-button>
      </el-form-item>
    </el-form>
  </div>
</template>

<script setup lang="ts">
import { ref } from "vue";
import { useRouter } from "vue-router";

const router = useRouter();

const form = ref({
  username: "",
  password: "",
});

const onSubmit = () => {
  console.log("submit!");
  router.push("/");
};
</script>

<style scoped></style>
