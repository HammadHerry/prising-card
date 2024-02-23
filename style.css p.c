*{
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'poppins',sans-serif;
}

body{
    width: 100%;
    height: 100vh;
    background: rgb(125, 201, 255);
    display: flex;
    align-items: center;
    justify-content: center;

}

.card{
max-width: 400%;
padding: 50px 30px;
background: white;
text-align: center;
margin: 0 2rem;
border-radius: 2rem;
overflow: hidden;
box-shadow: 0 0 15px rgba(0, 0, 0, 0.3);
position: relative;
transition: 0.4s ease-in-out;
cursor: pointer;
}

.card:hover{
    transform: scale(1.05)translateY(-10px);

}
.card .title{
    font-size: 3rem;
    color: black;
}

.card .price{
    color: rgb(52, 178, 251);
    font-weight: 800;
    font-size: 3rem;
    margin: 15px 0;
}
.card span{
    font-size: 1.2rem;
}
.card .description{
    color: black;
    font-size: 1.1rem;
    margin: 20px 0 20px;
}
.card .offer{
    display: block;
    color: black;
    font-size: 1rem;
    margin-top: 25px;
}
.btn{
display: inline-block;
padding: 15px 0;
background-color: rgb(52,178,251);
color: white;
text-decoration: none;
border-radius: 2rem;
border: 3px solid transparent;
font-size: 1.2rem;
margin-top: 40px;
width: 100%;
font-weight: 500;
transition: 0.4s ease-in-out;
}

.btn:hover{
    background: white;
    color: rgb(52,178,251);
    border: 3px solid rgb(52,178,251);
}
.ribbon-wrap{
    width: 150px;
    height: 150px;
    position: absolute;
    top: -15px;
    left: -15px;
    pointer-events: none;
}
.ribbon{
width: 200px;
font-size: 1rem;
font-weight: 800;
text-align: center;
padding: 10px;
background: rgb(52, 178, 251);
color: white;
position: absolute;
transform: rotate(-45deg);
right: -17px;
top: 30%;
}