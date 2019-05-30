// Inspired by https://github.com/engineer-man
const ffi = require('ffi');
const Library = ffi.Library;

const c_lib = Library('./c/main.so', {
    runMyThreads: ['void', []]
});

// c
c_lib.runMyThreads();