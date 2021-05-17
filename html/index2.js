const url  = "https://weather-api.endigo.now.sh/api/v1/weather";

let city;

fetch(url)
    .then((res) => res.json())
    .then((data) => {

        let city  = data.Cities[0];
        hello.innerHTML = city.Name;
        let PhenoDay = dayWheater.PhenoDay;
        let dayWheater = data.Cities[0].Wheaters[0];
        console.log("city", city, dayWheater, PhenoDay);
    })
    .catch((error) => console.log("ERROR: ", error));
    
