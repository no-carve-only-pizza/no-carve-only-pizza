<div align="center">

![header](https://capsule-render.vercel.app/api?type=waving&color=0:2E1065,50:5B21B6,100:7C3AED&height=200&section=header&text=Dohyun%20Park&fontSize=54&fontColor=EDE9FE&animation=fadeIn&fontAlignY=35&desc=Linux%20Security%20%C2%B7%20eBPF%20%C2%B7%20Detection%20Engineering&descSize=18&descAlignY=55&descColor=C4B5FD)

[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=22&pause=1000&color=C4B5FD&center=true&vCenter=true&width=780&lines=Observe+the+system;Connect+the+evidence;Explain+the+attack;Building+explainable+security+tools)](https://git.io/typing-svg)

<br/>

![Soongsil](https://img.shields.io/badge/Soongsil_University-AI_Software-5B21B6?style=for-the-badge&logo=google-scholar&logoColor=white)
![Location](https://img.shields.io/badge/Seoul-ROK-312E81?style=for-the-badge&logo=googlemaps&logoColor=white)
![WHS](https://img.shields.io/badge/White_Hat_School-4th_Cohort-7C3AED?style=for-the-badge&logo=securityscorecard&logoColor=white)

<br/>

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Dohyun_Park-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/도현-박-6a3035407)
[![Email](https://img.shields.io/badge/Email-dohyunpkr%40gmail.com-EA4335?style=for-the-badge&logo=gmail&logoColor=white)](mailto:dohyunpkr@gmail.com)
[![GitHub](https://img.shields.io/badge/GitHub-no--carve--only--pizza-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/no-carve-only-pizza)

<br/>

![Profile views](https://komarev.com/ghpvc/?username=no-carve-only-pizza&label=Profile%20views&color=5B21B6&style=flat-square)
![Followers](https://img.shields.io/github/followers/no-carve-only-pizza?label=Followers&style=flat-square&color=7C3AED)
![Stars](https://img.shields.io/github/stars/no-carve-only-pizza?affiliations=OWNER&label=Stars&style=flat-square&color=A78BFA)

</div>

---

## About

<div align="center">

**Security engineering student** focused on turning low-level Linux activity into  
**explainable evidence** for detection and response.

</div>

I'm a second-year AI Software student at **Soongsil University**. I build tools that observe process, file, network, and other endpoint events — then connect them so people can understand what an attack actually did inside the system.

At **ASC**, my university security club, I lead a four-person team and develop the system agent for an **eBPF-based Linux EDR**. The project started after analyzing `CVE-2025-55423`: beyond reproducing an attack, how do we explain what followed?

I also do **vulnerability research** with fuzzing and responsible disclosure, and adversarial ML work for the 2026 Hanium ICT Mentoring program.

### Open To

- Security product / detection engineering internships
- Collaboration on Linux security tooling and responsible disclosure
- Mentorship around eBPF, EDR, and vuln research workflows

---

## Tech Stack

<p align="center">
  <img src="https://skillicons.dev/icons?i=c,cpp,python,linux,docker,pytorch,fastapi,githubactions,bash,git" />
</p>

| Area | Tools |
|---|---|
| **Languages** | C · C++ · Python · Bash |
| **Systems / Security** | Linux · eBPF / libbpf · Frida · AFL++ |
| **AI / ML** | PyTorch · Adversarial ML (FGSM / PGD / Square / JSMA / ZOO) |
| **Backend & Tooling** | FastAPI · CMake · Docker · GitHub Actions · systemd |

---

## Domain Expertise

| Domain | Proficiency | Details |
|---|---|---|
| Linux Security | High | Endpoint telemetry, eBPF probes, system event pipelines |
| Detection Engineering | High | Behavioral rules, correlation windows, explainable evidence |
| Vulnerability Research | High | Fuzzing, root-cause analysis, GHSA / public issue disclosure |
| Adversarial ML | Intermediate | Attack implementation against face ID / verification models |
| Reverse Engineering | Intermediate | ARM64 flows, dynamic analysis with Frida |

---

## Featured Projects

<details open>
<summary><strong>edr-agent</strong> — eBPF Linux EDR agent</summary>
<br/>

An eBPF-based Linux endpoint security agent that collects process, file, network, memory, DNS, and namespace events. Implements 28 behavioral detection rules, sliding-window correlation, threat-intel feeds, EWMA anomaly detection, and Unix socket-based response.

| | |
|---|---|
| **Stack** | C++ · eBPF/libbpf · CMake · Linux · systemd |
| **Scale** | Multi-event telemetry pipeline (process / file / net / mem / DNS / ns) |
| **Detection** | 28 behavioral rules + correlation + TI feeds + EWMA |
| **Security** | Active response via Unix socket; designed for explainable host evidence |
| **Impact** | ASC team flagship; system agent owned end-to-end by me as team lead |
| **Repository** | [no-carve-only-pizza/edr-agent](https://github.com/no-carve-only-pizza/edr-agent) |

Grew out of `CVE-2025-55423` analysis: not just “did the exploit work?”, but “what chain of system events proves what happened?”

</details>

<details>
<summary><strong>hanium-aml</strong> — adversarial attacks on face auth</summary>
<br/>

Attack-side research for the 2026 Hanium ICT Mentoring project. Implemented FGSM, PGD, Square, JSMA, and ZOO against face recognition / verification pipelines and packaged results for the defense team’s reproducible evaluation.

| | |
|---|---|
| **Stack** | Python · PyTorch · Adversarial ML |
| **Scale** | ResNet-50 / FaceNet attack pipelines |
| **Performance** | Multi-attack suite (white-box + black-box) |
| **Security** | Measures robustness gaps in biometric auth models |
| **Impact** | Attack-team deliverable for Hanium ICT Mentoring (`26_HC160`) |
| **Repository** | [no-carve-only-pizza/hanium-aml](https://github.com/no-carve-only-pizza/hanium-aml) |

</details>

<details>
<summary><strong>unlicense-arm64</strong> — ARM64 reverse engineering research</summary>
<br/>

ARM64-focused research fork for analyzing software license-verification flows and architecture-specific behavior with dynamic instrumentation.

| | |
|---|---|
| **Stack** | ARM64 · Frida · Dynamic analysis |
| **Focus** | License-verification flow RE on Apple Silicon |
| **Security** | Architecture-aware binary analysis |
| **Impact** | Public research fork for reproducible ARM64 investigation |
| **Repository** | [no-carve-only-pizza/unlicense-arm64](https://github.com/no-carve-only-pizza/unlicense-arm64) |

</details>

<details>
<summary><strong>Selected disclosures (2026)</strong> — nfdump / softflowd / tcpflow</summary>
<br/>

Responsible disclosure of remote and memory-safety issues found via parser fuzzing and root-cause analysis.

| ID | Product | Class | Link |
|---|---|---|---|
| GHSA-35rg-4vr7-fmr2 | nfdump / nfcapd | Remote UAF (CWE-416), CVSS 7.5 | [Advisory](https://github.com/phaag/nfdump/security/advisories/GHSA-35rg-4vr7-fmr2) |
| GHSA-9q9x-c3p9-pp6r | nfdump / nfcapd | Remote SIGFPE / div-by-zero (CWE-369), CVSS 7.5 | [Advisory](https://github.com/phaag/nfdump/security/advisories/GHSA-9q9x-c3p9-pp6r) |
| softflowd#67 | softflowd | MPLS label-depth OOB read | [Issue](https://github.com/irino/softflowd/issues/67) |
| tcpflow#277 | tcpflow | Crafted-pcap OOB reads | [Issue](https://github.com/simsong/tcpflow/issues/277) |

Evidence screenshots: [security-disclosures-2026-07.md](./security-disclosures-2026-07.md)

</details>

---

## Experience

### Team Lead · System Agent — ASC (Soongsil Security Club)
**2026 — Present**

Lead a four-person team building an eBPF-based Linux EDR. Own the agent: telemetry collection, detection logic, and response path. Backend and dashboard are owned by teammates.

- Designed and implemented the system agent around real attack-trace questions from `CVE-2025-55423`
- Built multi-source endpoint event collection and behavioral detection pipeline
- Coordinated handoff so web dashboard work can sit on explainable host evidence

`C++` `eBPF` `libbpf` `Detection Engineering` `Team Leadership`

### Trainee — White Hat School, 4th Cohort
**2026 — Present**

Studying security fundamentals and security product development with emphasis on building, validating, and documenting real tools — not just theory.

`Security Product Development` `Blue Team` `Hands-on Labs`

### Attack Team — Hanium ICT Mentoring (26_HC160)
**2026**

Implemented adversarial attack suite against face recognition / verification models and packaged outputs for defense-team evaluation.

`PyTorch` `Adversarial ML` `Research Handoff`

---

## Achievements

<div align="center">

| Recognition | Details |
|---|---|
| **GHSA-35rg-4vr7-fmr2** | Remote IPFIX Options Template UAF in `nfcapd` — accepted & published (CVSS 7.5) |
| **GHSA-9q9x-c3p9-pp6r** | Remote IPFIX Options Template length wrap / DoS — accepted & published (CVSS 7.5) |
| **Public memory-safety reports** | softflowd#67 · tcpflow#277 |
| **ASC Team Lead** | Leading 4-person eBPF Linux EDR project |
| **Hanium ICT Mentoring** | Attack-side adversarial ML deliverable for face auth research |

</div>

---

## Education & Programs

| Program | Status |
|---|---|
| **Soongsil University** — School of AI Software | 2nd year (2026) |
| **White Hat School** — 4th cohort | In progress |
| **ASC** — university security club | Active · team lead |
| **Hanium ICT Mentoring** — 26_HC160 | Attack team |

---

## GitHub Analytics

<div align="center">

<a href="https://github.com/no-carve-only-pizza">
  <img height="180" src="https://github-readme-stats.vercel.app/api?username=no-carve-only-pizza&show_icons=true&theme=radical&hide_border=true&bg_color=0D1117&title_color=C4B5FD&icon_color=A78BFA&text_color=E5E7EB" />
</a>
<a href="https://github.com/no-carve-only-pizza">
  <img height="180" src="https://github-readme-streak-stats.demolab.com/?user=no-carve-only-pizza&theme=radical&hide_border=true&background=0D1117&ring=7C3AED&fire=A78BFA&currStreakLabel=C4B5FD" />
</a>

<img height="180" src="https://github-readme-stats.vercel.app/api/top-langs/?username=no-carve-only-pizza&layout=compact&theme=radical&hide_border=true&bg_color=0D1117&title_color=C4B5FD&text_color=E5E7EB" />

</div>

---

## GitHub Trophies

<div align="center">

<img src="https://github-profile-trophy.vercel.app/?username=no-carve-only-pizza&theme=radical&no-frame=true&no-bg=true&column=7&margin-w=8" />

</div>

---

## Contribution Activity

<div align="center">

<img src="https://github-readme-activity-graph.vercel.app/graph?username=no-carve-only-pizza&theme=react-dark&bg_color=0D1117&color=A78BFA&line=7C3AED&point=C4B5FD&area=true&hide_border=true" />

</div>

---

## Contribution Snake

<div align="center">

<img src="https://raw.githubusercontent.com/no-carve-only-pizza/no-carve-only-pizza/output/github-contribution-grid-snake-dark.svg" alt="snake" />

</div>

---

## Current Focus

```yaml
learning:
  - White Hat School 4th cohort — security product fundamentals
  - Detection engineering & explainable host timelines
building:
  - eBPF Linux EDR end-to-end validation (edr-agent)
  - Responsible disclosure evidence packs
exploring:
  - Remote-reachable memory corruption in network parsers
  - AFL++ campaign methodology on real attack surfaces
open_to:
  - Security engineering internships
  - Collaboration on Linux security tooling
```

---

## Connect

<div align="center">

[![Gmail](https://img.shields.io/badge/Gmail-dohyunpkr%40gmail.com-EA4335?style=for-the-badge&logo=gmail&logoColor=white)](mailto:dohyunpkr@gmail.com)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Dohyun_Park-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/도현-박-6a3035407)
[![GitHub](https://img.shields.io/badge/GitHub-no--carve--only--pizza-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/no-carve-only-pizza)

</div>

---

<div align="center">

**Observe the system. Connect the evidence. Explain the attack.**

![footer](https://capsule-render.vercel.app/api?type=waving&color=0:7C3AED,50:5B21B6,100:2E1065&height=120&section=footer)

</div>
