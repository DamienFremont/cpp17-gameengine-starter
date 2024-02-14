:warning: WORK IN PROGRESS :warning:
====================================

# CONTRIBUTING

## CI

### Sonar

```bash
# install
docker pull library/sonarqube:10.4.0-community
docker pull sonarsource/sonar-scanner-cli:5.0.1
docker run -d --name sonarqube -p 9000:9000 sonarqube
# security
# (http://localhost:9000 > sonar menu > 'my account' > 'security' > 'type:globa'l > 'generate' > copy token value)

# usage: scan with docker
docker run -it --rm --net=host -e SONAR_SCANNER_OPTS="-Dsonar.projectKey=cpp17-gameengine-starter" -e SONAR_TOKEN="sqa_9e2523111bc7c5fc8c1d5109c10df039447b3ec2" -v ".:/usr/src" sonarsource/sonar-scanner-cli

# result
# http://localhost:9000/dashboard?id=cpp17-gameengine-starter
```

## Resources

- Sonarqube
  - [SonarScanner CLI](https://docs.sonarsource.com/sonarqube/latest/analyzing-source-code/scanners/sonarscanner/)
- GitHub
  - [sonar-cxx ](https://github.com/SonarOpenCommunity/sonar-cxx)
  - 
