// class Timer extends React.Component {
//     constructor(props) {
//         super(props);
//         this.state = {seconds: 0};
//     }

//     tick() {
//         this.setState(state => ({
//             seconds: state.seconds + 1,
//         }));
//     }

//     componentDidMount() {
//         this.interval = setInterval(() => this.tick(), 1000);
//     }