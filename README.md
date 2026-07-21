<div align="center">

# Dohyun Park

### Linux Security · eBPF · Detection Engineering

I build security tools that turn low-level system activity into  
explainable evidence for detection and response.

[![GitHub](https://img.shields.io/badge/GitHub-no--carve--only--pizza-181717?style=flat-square&logo=github)](https://github.com/no-carve-only-pizza)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Dohyun_Park-0A66C2?style=flat-square&logo=linkedin)](https://www.linkedin.com/in/도현-박-6a3035407)
[![Email](https://img.shields.io/badge/Email-dohyunpkr%40gmail.com-EA4335?style=flat-square&logo=gmail&logoColor=white)](mailto:dohyunpkr@gmail.com)

</div>

---

## About Me

I'm a second-year AI Software student at Soongsil University, focused on Linux
security and security product development.

At ASC, my university security club, I lead a four-person team and develop the
system agent for an eBPF-based Linux EDR project. The project began with a simple
question after analyzing <code>CVE-2025-55423</code>: beyond reproducing an attack,
how can we explain what actually happened inside the system?

My goal is to connect process, file, network, and other endpoint events into
evidence that helps people understand and respond to an attack.

## Focus

| Area | What I work on |
|---|---|
| **Linux Security** | System activity, endpoint telemetry, and attack traces |
| **Detection Engineering** | Behavioral rules, event correlation, and explainable evidence |
| **Security Product Development** | Collection, detection, validation, deployment, and documentation |
| **Vulnerability Research** | Reproduction, root-cause analysis, fuzzing, and responsible disclosure |

## Featured Projects

### [edr-agent](https://github.com/no-carve-only-pizza/edr-agent)

An eBPF-based Linux endpoint security agent that collects process, file, network,
memory, DNS, and namespace events. It implements 28 behavioral detection rules,
event correlation, threat-intelligence feeds, anomaly detection, and Unix
socket-based response.

**Role:** Team lead · System agent development  
**Stack:** C++ · eBPF/libbpf · CMake · Linux

### [hanium-aml](https://github.com/no-carve-only-pizza/hanium-aml)

Attack-side research for the 2026 Hanium ICT Mentoring project. I implemented
FGSM, PGD, Square, JSMA, and ZOO attacks against face recognition and verification
models, and organized the outputs for reproducible evaluation by the defense team.

**Role:** Adversarial attack implementation · Evaluation handoff  
**Stack:** Python · PyTorch · Adversarial Machine Learning

### [unlicense-arm64](https://github.com/no-carve-only-pizza/unlicense-arm64)

An ARM64-focused research fork for analyzing software license-verification flows
and architecture-specific behavior.

**Focus:** ARM64 · Reverse Engineering · Frida · Dynamic Analysis

## Tech Stack

![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=111111)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=cplusplus&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=flat-square&logo=linux&logoColor=111111)
![eBPF](https://img.shields.io/badge/eBPF-111111?style=flat-square&logo=linuxfoundation&logoColor=white)
![Python](https://img.shields.io/badge/Python-3776AB?style=flat-square&logo=python&logoColor=white)
![PyTorch](https://img.shields.io/badge/PyTorch-EE4C2C?style=flat-square&logo=pytorch&logoColor=white)
![FastAPI](https://img.shields.io/badge/FastAPI-009688?style=flat-square&logo=fastapi&logoColor=white)
![GitHub Actions](https://img.shields.io/badge/GitHub_Actions-2088FF?style=flat-square&logo=githubactions&logoColor=white)
![Docker](https://img.shields.io/badge/Docker-2496ED?style=flat-square&logo=docker&logoColor=white)

## Currently

- Building and validating the end-to-end flow of the Linux EDR project
- Studying security fundamentals and product development in White Hat School, 4th cohort
- Researching real attack surfaces through parser fuzzing and responsible disclosure
- Working toward a host timeline that explains attacks as connected system events

## Selected disclosures (2026)

- [GHSA-35rg-4vr7-fmr2](https://github.com/phaag/nfdump/security/advisories/GHSA-35rg-4vr7-fmr2) — remote IPFIX Options Template UAF in `nfcapd` (CVSS 7.5)
- [GHSA-9q9x-c3p9-pp6r](https://github.com/phaag/nfdump/security/advisories/GHSA-9q9x-c3p9-pp6r) — remote IPFIX Options Template length wrap / DoS in `nfcapd` (CVSS 7.5)
- [softflowd#67](https://github.com/irino/softflowd/issues/67) · [tcpflow#277](https://github.com/simsong/tcpflow/issues/277) — OOB-read memory-safety reports

Evidence screenshots + triage titles: [security-disclosures-2026-07.md](./security-disclosures-2026-07.md)

---

<div align="center">

**Observe the system. Connect the evidence. Explain the attack.**

</div>
