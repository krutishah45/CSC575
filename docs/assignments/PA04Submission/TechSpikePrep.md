# Tech Spike Preparation

## Gap Analysis

### Our Current Situation

#### Team Member: Horacio
- Skills: JavaScript, TypeScript, C#, Git
- Strengths: debugging, reading large codebases
- Weaknesses: WebGL, shader programming
- Interests: WebGL, rendering pipelines

#### Team Member: Luis
- Skills: JavaScript, TypeScript, Git
- Strengths: Front end development
- Weaknesses: WebGL
- Interests: Graphics

#### Team Member: Paul
- Skills: JavaScript, TypeScript
- Strengths: Frontend development, Backend development, Programming
- Weaknesses: not sure
- Interests: Software Development
---

### Our Goals

To contribute to the project we need knowledge in:

Priority:
1. Understanding the p5 rendering pipeline (Canvas vs WebGL)
2. Writing and running unit tests using Mocha
3. Following GitHub contribution workflow (PRs, branching, commits)
4. Navigating and modifying the p5.js codebase

---

### Our Gaps

#### Team Gaps:
- p5 rendering pipeline (2D vs WebGL)
- Unit testing framework (Mocha)
- GitHub contribution workflow
- Understanding large open-source codebases

#### Individual Gaps:

**Horacio:**  
- Rendering internals (p5 core + WebGL)
- Node.js tooling in large JS projects

**Luis:**  
- Unit testing frameworks (Mocha)
- Graphics programming

**Paul:**  
- Unit testing frameworks (Mocha)

---

### Our Plan

- **Horacio → Rendering Pipeline + Codebase Exploration**
  - Analyze `src/core/rendering.js` and `createCanvas`
  - Understand how p5 switches between 2D and WEBGL
  - Document rendering flow

- **Paul &  Luis → Unit Testing (Mocha)**
  - Run `npm test`
  - Analyze existing tests in `/test`
  - Create a simple test for a p5 function


---

## Learning Resources

### Gap: p5 Rendering Pipeline
- https://github.com/processing/p5.js/tree/main/src
- https://p5js.org/reference/#/p5/createCanvas
- MDN Canvas API: https://developer.mozilla.org/en-US/docs/Web/API/Canvas_API
- WebGL basics: https://developer.mozilla.org/en-US/docs/Web/API/WebGL_API

---

### Gap: Mocha Testing Framework
- https://mochajs.org/
- p5 test directory: https://github.com/processing/p5.js/tree/main/test

---


## Planned Spike Artifacts

### Main Artifact: Contribution Readiness Simulation

We will simulate a real contribution to the p5.js codebase by completing the following:

---

### 1. Codebase Exploration Artifact
- Identify key files:
  - `src/core/main.js`
  - `src/core/rendering.js`
  - `src/webgl/`
- Document how rendering flows through the system

---

### 2. Rendering Pipeline Analysis
- Compare:
  - `createCanvas(400, 400)`
  - `createCanvas(400, 400, WEBGL)`
- Identify:
  - Differences in coordinate systems
  - Rendering behavior
- Create a simple diagram:

User Sketch → p5 API → Renderer → Canvas/WebGL

---

### 3. Unit Testing Artifact (Mocha)
- Run test suite (`npm test`)
- Create a simple test:

```js
describe("p5 basic test", function () {
  it("should create a canvas", function () {
    let p = new p5(() => {});
    p.createCanvas(100, 100);
    if (!p.canvas) throw new Error("Canvas not created");
  });
});
