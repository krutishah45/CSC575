# Project Selection

## Projects Considered

### Project 1: Discordo
- **What it is:** 
Discordo is a lightweight, secure, and feature-rich Discord terminal client. Heavily work-in-progress, expect breaking changes.
- **Why we considered it:** 
We considered this project since it is written in Go and it's a new language for all of us. The installation and setup looked pretty straight forward. 
- **Relevant Project Explorations / Reviews:**
  - [Exploration 1](../PA01Submission/Discordo.md)
  - [Review 1](../PA2Submission/Discordo.md)


### Project 2: P5.js
- **What it is:** It is a website that allows people to be creative by making JavaScript code. It can range from anything like art, animations and games.

- **Why we considered it:** 
It uses JavaScript and introduces a lot of people to coding and computer programming. I chose it because I believe it should be one of the repositories that allow me to work on stuff.

- **Relevant Project Explorations / Reviews:**
  - [Exploration 1](../PA01Submission/p5Js.md)
  - [Review 1](../PA2Submission/p5Js.md)

### Project 3: Free Code Camp
- **What it is:** Non-profit organization that offers a project-based interactive learning platform to learn coding, web development, data science, and AI. 
- **Why we considered it:** Thought this is a powerful educational tool for software development and most compatible for all of us given our skillset.
- **Relevant Project Explorations / Reviews:**
  - [Exploration 1](../PA01Submission/FreeCodeCamp.md)
  - [Review 1](../PA2Submission/FreeCodeCamp.md)

---

## Install Spike

### Discordo 
- **Team Members Assigned:** Horacio
- **Installation Documents:**
  - [Developer setup guide](https://github.com/ayn2op/discordo)
  - [Contribution guide](https://github.com/ayn2op/discordo)

- **Build instructions:**

```bash
git clone https://github.com/ayn2op/discordo.git
cd discordo
go build .
go run .
```

- **Repository Links:**
  - [Upstream Repo](https://github.com/ayn2op/discordo)
  - [Fork](https://github.com/horavaldesg/discordo)
- **Summary:**  
  Installing was pretty straight forward. I just needed to install Go from [Go Website](https://go.dev/dl/) and make sure to restart vs code. I was able to successfully install and run it on both macOS and Windows. I did not run into any issues or problems. 

### P5js
- **Team Members Assigned:** Zegarek, Paul
- **Installation Documents:**
  - [README](https://github.com/processing/p5.js/blob/main/README.md)
  - [Contributing](https://github.com/processing/p5.js/blob/main/CONTRIBUTING.md)
  - [License](https://github.com/processing/p5.js/blob/main/license.txt)
- **Repository Links:**
  - [Upstream Repo](https://github.com/processing/p5.js)
  - [Fork](https://github.com/PaulZ357/p5.js)
- **Summary:**  
I would say installation was straightforward, everything *appeared* to run great. However, I am a little unsure whether I would be able to get a local version of the actual p5js edit window you would see in browser where you type in JS code.
  
### FreeCodeCamp
- **Team Members Assigned:** Horacio, Luis
- **Installation Documents:**
  - [Doc 1](https://contribute.freecodecamp.org/getting-started/#ui--client)
- **Repository Links:**
  - [Upstream Repo](https://github.com/freeCodeCamp/freeCodeCamp)
  - [Fork](https://github.com/lgilbuena/freeCodeCamp)
- **Summary:**  
  Installing this project on Mac was a different experience from installing on Windows. Horacio had installed the project on both Mac and Windows and found that installing this project on Mac was much easier and we had known this going into the installation process seeing that on the documentation, it was meant for development on linux/Mac.

---

## Project Rankings

| Project Name | Community | Complexity | Activity | Approachability | Appeal |
|---|---:|---:|---:|---:|---:|
| P1: Discordo | 3 | 1 | 3 | 1 | 2 |
| P2: P5.js | 2 | 2 | 2 | 2 | 1 |
| P3: Free Code Camp | 1 | 3 | 1 | 3 | 3 |

## Rationale

### Community
Free Code Camp ranked highest in community because it is a very large non-profit platform with thousands of contributors, learners, and maintainers actively supporting discussions, issues, and pull requests. This makes it easier to find help, documentation, and guidance when contributing. P5.js ranked in the middle since it also has a strong creative and educational community, but it is more niche compared to Free Code Camp’s broad audience. Discordo ranked lowest because it is a smaller, work-in-progress project with fewer contributors and less visible community interaction, which may make it harder to get support or feedback.


### Complexity
Discordo ranked as the least complex because it is a relatively lightweight terminal client with a smaller codebase and fewer interconnected systems. This makes it easier to understand the architecture and start contributing quickly. P5.js ranked in the middle because although it is approachable at the surface level, the underlying rendering engine, documentation tooling, and browser compatibility concerns introduce moderate complexity. Free Code Camp ranked as the most complex due to its very large full-stack codebase involving multiple services, databases, frontend frameworks, and learning platform infrastructure, making onboarding and navigation more challenging and it is not Windows compatible out of box.

### Activity
Free Code Camp ranked highest in activity because it receives frequent commits, issue discussions, and feature updates. This level of activity indicates that the project is continuously evolving and maintained. Discordo ranked second since it is actively being developed but at a slower pace due to a smaller team and community. P5.js ranked lowest in activity relative to the others because while it is stable and maintained, its development pace is more focused on incremental improvements rather than constant large-scale updates.

### Approachability
Discordo ranked as the most approachable project because its smaller scope, clear installation process, and use of Go made it easier to build and run locally without extensive configuration. P5.js ranked second since it is beginner-friendly in concept and has strong documentation, but contributing to the core library may still require deeper understanding of JavaScript and browser environments. Free Code Camp ranked lowest in approachability because setting up the full development environment and understanding its architecture requires more time and prior experience with WSL (Windiws Subsystem for Linux).

### Appeal
P5.js ranked highest in appeal because it allows for creative contributions related to visual programming, animations, and interactive experiences, which aligns with the team’s interest in building engaging and expressive software. Discordo ranked second since working with Go and terminal-based interfaces presents an interesting technical learning opportunity. Free Code Camp ranked lowest in appeal not because it lacks value, but because its contributions are often more structured around educational content, platform maintenance, and large-scale infrastructure rather than creative or experimental development.
---

## Project Selection

- **Project:** P5.js

### Rationale
Our team ultimately chose P5.js because it provided the best balance between approachability, creativity, and meaningful contribution opportunities. While Free Code Camp had the strongest community and activity levels, its large and complex codebase made installation and setup more difficult within the limited time frame of the project. Discordo was very approachable technically, but its smaller scope and community meant fewer opportunities for impactful contributions and collaboration. P5.js stood out as a middle ground where the project is well-documented, widely used in education and creative coding, and still technically rich enough to allow us to learn modern JavaScript tooling and browser-based development. As a team, we weighted appeal and approachability slightly higher than community size and activity, since we believe motivation and ability to contribute effectively will lead to better overall outcomes and a stronger portfolio piece.

### Install Estimate
- Estimated hours for all team members to get set up: **1-2 hours**
- Brief explanation of estimate.

### Knowledge Gaps
- **Gap 1:** Not too much experience with Javascript (Horacio). 
- **Gap 2:** Not very familiar with this project (Luis)
- **Gap 3:** Contributing to an Open Source for the first time.
- **Gap 4:** Mocha for unit tests (Paul).

### Concerns
- **Concern 1:** Finding first issues since there is not "first issue" label.
- **Concern 2:** Testing with a local version of p5.
- **Concern 3:** Whether or not we are able to quickly merge changes from Pull Requests
