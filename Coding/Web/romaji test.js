const quizData = [
    { romaji: "konnichiwa", hiragana: "こんにちは" },
    { romaji: "arigatou", hiragana: "ありがとう" },
    { romaji: "sayonara", hiragana: "さようなら" },
    { romaji: "ohayou", hiragana: "おはよう" },
    { romaji: "sumimasen", hiragana: "すみません" }
];

let currentQuestion = 0;
let score = 0;

document.addEventListener("DOMContentLoaded", () => {
    loadQuestion();

    document.getElementById("submit").addEventListener("click", () => {
        checkAnswer();
    });
});

function loadQuestion() {
    document.getElementById("question").textContent = `Convert: ${quizData[currentQuestion].romaji}`;
    document.getElementById("answer").value = "";
    document.getElementById("feedback").textContent = "";
}

function checkAnswer() {
    const userAnswer = document.getElementById("answer").value.trim();
    const correctAnswer = quizData[currentQuestion].hiragana;
    if (userAnswer === correctAnswer) {
        score++;
        document.getElementById("feedback").textContent = "Correct!";
    } else {
        document.getElementById("feedback").textContent = `Wrong! The correct answer is ${correctAnswer}.`;
    }
    
    currentQuestion++;
    if (currentQuestion < quizData.length) {
        setTimeout(loadQuestion, 2000);
    } else {
        setTimeout(() => {
            document.getElementById("question").textContent = `Test finished! Your score: ${score}/${quizData.length}`;
            document.getElementById("answer").style.display = "none";
            document.getElementById("submit").style.display = "none";
        }, 2000);
    }
}
