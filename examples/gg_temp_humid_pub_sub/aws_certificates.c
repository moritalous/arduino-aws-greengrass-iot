#ifdef __cplusplus
extern "C" {
#endif

/* AWS IoT root certificate for region eu-central-1 */
const char aws_root_ca[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n\
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n\
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n\
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n\
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n\
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n\
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n\
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n\
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n\
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n\
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n\
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n\
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n\
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n\
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n\
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n\
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n\
rqXRfboQnoZsG4q5WTP468SQvvG5\n\
-----END CERTIFICATE-----\n"};

/*thing certificate:to be updated *****.cert.pem */
const char thingCA[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWjCCAkKgAwIBAgIVANWQ3PUwugVfDgZM4TL9rRvhzX+GMA0GCSqGSIb3DQEB\n\
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n\
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMDA1MjYxMjE4\n\
MTJaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n\
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQChBCeq9Q3LLIrt36pM\n\
4FlcZdurBWpa7AHcROFLaOPRIWpTJB77XZcAcmcMlrxNtOBqZclNGogCq+/lOQYX\n\
rrF/kJyl5oBl+Yt33vuEgpNXeFSEHp/i/5FeBPoK7d7pdyJfz1NmGpvOhW/NHvix\n\
ndyuHV61n7J4iV3YvpExRa/rcwOloumsDk3tS1D65buk8fjPfWwiBsoXea3BYrVt\n\
ms+HQCf2O785MDdDLhGzFXEWYJSRwIoNsFYbr11N6e3zICOOH8d/D3Y38MEf4BeR\n\
LxDJE5c8vevJpTJCOnZibeef+X7GRu1PxF6kg1Pnu8OCVxWa772wZyS9Ng92qqdv\n\
5mpdAgMBAAGjYDBeMB8GA1UdIwQYMBaAFC5zi5T9BubdLjBzypr6Vm1bhlfAMB0G\n\
A1UdDgQWBBTtRf1RQprqHEO+Fpw1wy4Z4zjyTzAMBgNVHRMBAf8EAjAAMA4GA1Ud\n\
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAv8vVfxUBcaWjQ7EfyKZMuwHq\n\
b6LIPocbmrgpj9anVdvHbPzUCq5C9bHQCn34EIIehlY58m1JasJgEkThLDh586UY\n\
kdbRS4n0b8bL99ViRaCYlPG7Vy22IHgoJ1JKhTK7wnwmgG3XguxvzSqvadNXLo64\n\
9uZtZjXrx3C43vhOr7SvWmvY/f3O+8EfBQDTiQ+2fmccuaDKHCZIu9Z9jVORxmsN\n\
0damij8X7ozb2O+dn9MMRnAXR0nETLLCA5ke8Emn+ppCfdXtPZVarjnquR+DP+89\n\
s7GgJlbK+MXIdnbuChPa8Jx4s5/Dnrp624clRTruetcBja4gwfu7WW09jTrW5A==\n\
-----END CERTIFICATE-----\n"};

/* thing private key: to be updated .private.key */
const char thingKey[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEpAIBAAKCAQEAoQQnqvUNyyyK7d+qTOBZXGXbqwVqWuwB3EThS2jj0SFqUyQe\n\
+12XAHJnDJa8TbTgamXJTRqIAqvv5TkGF66xf5CcpeaAZfmLd977hIKTV3hUhB6f\n\
4v+RXgT6Cu3e6XciX89TZhqbzoVvzR74sZ3crh1etZ+yeIld2L6RMUWv63MDpaLp\n\
rA5N7UtQ+uW7pPH4z31sIgbKF3mtwWK1bZrPh0An9ju/OTA3Qy4RsxVxFmCUkcCK\n\
DbBWG69dTent8yAjjh/Hfw92N/DBH+AXkS8QyROXPL3ryaUyQjp2Ym3nn/l+xkbt\n\
T8RepINT57vDglcVmu+9sGckvTYPdqqnb+ZqXQIDAQABAoIBAEyaWHDp8u0FPPdc\n\
YH4AgiMGRpK/mdC11VDA6FpjBXd6KUZyudamuO86fjIsCFwDwHx9/l4TUD/NIu1v\n\
yqk7sDBbUVtQJSfep+6YhBqPsJ99nN/aXgC1y6fqQDcw4cs6pXzleuzpndSMARua\n\
L4D49INVb7iCyHq2B5LVXugNGlut89DkN4joFa2OEI0rJedAur0SpeqzwOB5qMaF\n\
VAjP7kDTVPzYtLR9DlqLHJMTsxjTCqyr94ApmCbdphQGyGbuq4NCLOlpkmo6SO4S\n\
LjUHNbB9f265RXO8w9sVt6XuqHxjSr3aUVnf91nUkWhIzzZn8d7LR7LHZW3PMMf1\n\
4jXXBbUCgYEA1ZjUd+obgMISJTU2mpvMWhqXR5tP+3rU2qbs2eF8MrPNsaimqdt+\n\
oP6GElSHQVCwfB8fhI1OQjwSAlh+r5kU0Q5c7BqNHI1vsoEqPx8YFAYmFv4325wx\n\
BH71sAZ5bPXKQP38W2Kw9IXo6QRR9oZaJdcUbo0vINvdHgkFpUiXnSsCgYEAwPsg\n\
7NN7N3eJBuVv6iTrHGOFICv0yvK0GkN8+MBhdHsWY64JEiM6Q0lQ6hPcYBAf4SSl\n\
qtSGboxV7E5sbjr7lCsg18y7M8aHkR3/y+w2LpPz+tPWPSF9Nrz9soiJTVM+Zasm\n\
tEciyo4rlHfigGCNA8819Xwly0Qf7oEKd1BLIpcCgYEAvr2Hnr30aXrk8U0fwdk3\n\
F49/YHaVaiE6SzedcsQlQLHIEcplanGUFviziVLqpa0ErRKt9pSpOgSioG2eU/kD\n\
2dxVppHfSYwUHvexXkTKH7eN9CJ4hyhnrXgitlpRvLeRMZCd9o2fL/0VDGDLQLah\n\
cgErQb3aRCGSx+uOmxbELZkCgYBsWZN25JY94kNxN8jKMcg/vDC2i3d5qyMry9CS\n\
6ZDOEX3UoZY+NME1nihsBJKq7OK5ShYqAAEqeGiVsMJ4cW1nF3/tKenBfCoJdEp2\n\
eD1DkZZesimLUQ44eYwHfVl5rM9PzfSBK5+BEqmtRlJJuevyw5iMKBQgODOleZYi\n\
v1YwKQKBgQCRg/CyRz+wuRinbEbDLW1+Gaznxi1gZYRyeLKePumrKUsgrtnYlN40\n\
34as4/AekJgPSNFd0Q3INz8fJJ78nGtUSynEYPxdFvc4YfEhhVzMiWBDcvc8cG+O\n\
0qxKBE9RYtMwZq9u5ZKsWNwJrxFVvOiJI/2q42XDt6IvZDOc1970tg==\n\
-----END RSA PRIVATE KEY-----\n"};


#ifdef __cplusplus
}
#endif
